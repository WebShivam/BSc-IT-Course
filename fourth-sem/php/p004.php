// Create a PHP page which accepts string from user. After submission that page displays
the reverse of provided string.

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <br><br><br>
        Enter the string to reverse: <input type="text" name="string" required/> <br><br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $string = $_POST['string'];
            $rev_string = strrev($string);
            echo "The reverse of ".$string." is ".$rev_string;
        }
    ?>
</body>
</html>