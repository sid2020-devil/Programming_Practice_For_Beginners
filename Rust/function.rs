fn main() {
    println!("Sum result {}", sum(5,8));
}

fn sum(x:i32, y:i32) -> i32 {
    let z = {
         x + y
    };
   z
}
