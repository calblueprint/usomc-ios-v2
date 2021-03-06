//
//  BPLoginViewController.h
//  USOMC
//
//  Created by William Tang on 11/9/13.
//  Copyright (c) 2013 Mark Miyashita. All rights reserved.
//

#import "BPViewController.h"
#import <RestKit/RestKit.h>
#import <MBProgressHUD/MBProgressHUD.h>
//#import <AFNetworking/AFJSONRequestOperation.h>

#import "BPEventsNavigationController.h"
#import "BPEventsTableViewController.h"
#import "UIButton+NUI.h"
#import "UILabel+NUI.h"
#import "UITextField+NUI.h"
#import "KeychainItemWrapper.h"
#import "AESCrypt.h"
#import "EnvironmentVariables.h"

@interface BPLoginViewController : BPViewController {
  UILabel *verifiedText;
  UITextField *usernameField;
  UITextField *passwordField;
  
  BPEventsNavigationController *eventsNavigationController;
}

@property (nonatomic, assign) UILabel *verifiedText;
@property (nonatomic, assign) UITextField *usernameField;
@property (nonatomic, assign) UITextField *passwordField;
@property (nonatomic, retain) BPEventsNavigationController *eventsNavigationController;
@property (nonatomic) BPEventsTableViewController *eventsTableViewController;
@property (nonatomic) KeychainItemWrapper *keychain;

- (id) init:(BPEventsNavigationController *)eventPage;
- (NSDictionary*) keychainCredentials;
- (void) clearKeychain;
@end
