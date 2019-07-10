//
//  ViewController.m
//  parsechat
//
//  Created by clairec on 7/10/19.
//  Copyright © 2019 codepath. All rights reserved.
//

#import "LoginViewController.h"
#import "Parse.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)loginUser {
    NSString *username = self.usernameLogin.text;
    NSString *password = self.passwordLogin.text;
    
    [PFUser logInWithUsernameInBackground:username password:password block:^(PFUser * user, NSError *  error) {
        if (error != nil) {
            NSLog(@"User log in failed: %@", error.localizedDescription);
        } else {
            NSLog(@"User logged in successfully");
            
            // display view controller that needs to shown after successful login
        }
    }];
}


- (IBAction)signupPressed:(id)sender {
    [self performSegueWithIdentifier:@"toSignUp" sender:self];
}

- (IBAction)loginPressed:(id)sender {
[self performSegueWithIdentifier:@"loginSegue" sender:self];
}




@end
