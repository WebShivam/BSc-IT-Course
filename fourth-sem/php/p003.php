//Write a program to check whether the given number is prime or not.
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Check prime number</title>
</head>
<body>
    <form action="" method="post">
        <br><br><br>
        Enter the number to check: <input type="number" min="0" name="number" required/> <br><br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $number = $_POST['number'];
            if($number == 1){
                echo "1 is neither prime nor composite number";
            }
            elseif($number == 2){
                echo "2 is a prime number";
            }
            else{
                $flag = 0;
                for($i = 2; $i <= sqrt($number); $i++){
                    if($number % $i == 0){
                        $flag = 1;
                        break;
                    }
                }
                if($flag == 1){
                    echo $number." is not a prime number";
                }
                else{
                    echo $number." is a prime number";
                }
            }
        }
    ?>
</body>
</html>