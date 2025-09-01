// app.js
const express = require("express");
const app = express();
const PORT = 3001;

app.get("/", (req, res) => {
  res.send(`
    <h2>Welcome to Cookie Monster</h2>
    <p>Your role is: <b>guest</b></p>
    <p>Hint: Sometimes cookies are more powerful than they look!</p>
  `);
});

app.get("/admin", (req, res) => {
  const role = req.headers.cookie;

  if (role && role.includes("role=admin")) {
    res.send("Congrats! Flag: CTF{cookie_admin_win}");
  } else {
    res.send("Access denied. Only admin can see the flag!");
  }
});

app.listen(PORT, () => {
  console.log(`Server running at http://localhost:${PORT}`);
});
