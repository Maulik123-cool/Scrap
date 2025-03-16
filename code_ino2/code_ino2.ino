<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Slapper</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Slapper AI</h1>
    <p>Enter a compliment or an insult:</p>
    <form onSubmit={handleSubmit}>
    <input type="text" value={input} id="userInput">
    <button onclick={handleSubmit}>Submit</button>
    </form>
    <p id="response"></p>

    <script src="script.js"></script>
</body>
</html>