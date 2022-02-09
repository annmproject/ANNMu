<!DOCTYPE html>
<html lang="{{language}}">
    <head>
        <title>{{title}}</title>
        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
		<meta name="robots" content="index,follow">
    </head>
    <body>
        <h1>{{title}}</h1>
        <p>{{introduction}}</p>
        <form action="" method="POST">
            <label for="fname">First name:</label><br>
            <input type="text" id="fname" name="fname" value="John"><br>
            <label for="lname">Last name:</label><br>
            <input type="text" id="lname" name="lname" value="Doe"><br><br>
             <input type="hidden" id="token" name="token" value="{{token}}"><br><br>
            <input type="submit" value="Submit">
        </form> 
    </body>
</html>

