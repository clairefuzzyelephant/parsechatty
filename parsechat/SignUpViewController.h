//
//  SignUpViewController.h
//  parsechat
//
//  Created by clairec on 7/10/19.
//  Copyright © 2019 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameSignup;
@property (weak, nonatomic) IBOutlet UITextField *passwordSignup;
@property (weak, nonatomic) IBOutlet UITextField *emailSignup;
@property (weak, nonatomic) IBOutlet UIButton *signupButton;
- (IBAction)signupClicked:(id)sender;

@end

NS_ASSUME_NONNULL_END
