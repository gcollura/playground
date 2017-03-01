use std::io;

fn main() {
    let mut input = String::new();
    let reader = io::stdin();
    reader
        .read_line(&mut input)
        .expect("failed to read line");

    let t: u32 = input.trim().parse()
        .expect("Please type a number!");
    
    let (mut n, mut p, mut sum): (u32, u64, u64);
    for _ in 0..t {
        input.clear();
        match reader.read_line(&mut input) {
            Ok(_) => n = input.trim().parse().unwrap(),
            Err(_) => continue,
        }

        p = ((n - 1) / 3) as u64;
        sum = (3 * p * (p + 1)) / 2;

        p = ((n - 1) / 5) as u64;
        sum += (5 * p * (p + 1)) / 2;

        p = ((n - 1) / 15) as u64;
        sum -= (15 * p * (p + 1)) / 2;
        
        println!("{}", sum);
    }
}
