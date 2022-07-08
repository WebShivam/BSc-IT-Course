// Write  a PHP script that checks whether a passed string is palindrome or not?
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Palindrome</title>
</head>
<body>
    <form action="" method = "post">
        <br><br> <br>
        Enter the string to check if it is palindrome: <br> <br>
        <input type="text" name="string" required/> <br> <br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
                $string = $_POST['string'];
                $rev_string = strrev($string);
                if($string == $rev_string){
                    echo "The string is a palindrome";
                }
                else{
                    echo "The string is not a palindrome";
                }
        }
    ?>
</body>
</html>