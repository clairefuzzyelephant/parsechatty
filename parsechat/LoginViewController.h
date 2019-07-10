//
//  ViewController.h
//  parsechat
//
//  Created by clairec on 7/10/19.
//  Copyright © 2019 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameLogin;
@property (weak, nonatomic) IBOutlet UITextField *passwordLogin;
- (IBAction)signupPressed:(id)sender;
- (IBAction)loginPressed:(id)sender;



@end

