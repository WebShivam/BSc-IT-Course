// write a php program using switch() statement
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Switch in PHP</title>
</head>
<body>
    <br><br><br>
    <form action="" method="post">
        <h2>Choose any 1 choice of the following: </h2> <br><br>
        Press 1 for Business <br>
        Press 2 for Coding <br>
        Press 3 for WebDesign <br>
        Press 4 for Music <br>
        Press 5 for Photography <br> <br>
        Enter Choice : <input type="text" name="choice" required/> <br> <br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $choice = $_POST['choice'];
            switch($choice){
                case 1:
                    echo "You have selected Business";
                    break;
                case 2:
                    echo "You have selected Coding";
                    break;
                case 3:
                    echo "You have selected WebDesign";
                    break;
                case 4:
                    echo "You have selected Music";
                    break;
                case 5:
                    echo "You have selected Photography";
                    break;
                default:
                    echo "Invalid Choice";
            }
        }
    ?>
</body>
</html>