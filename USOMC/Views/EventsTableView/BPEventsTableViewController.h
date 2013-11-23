//
//  BPEventsTableViewController.h
//  USOMC
//
//  Created by Mark Miyashita on 11/9/13.
//  Copyright (c) 2013 Mark Miyashita. All rights reserved.
//
#import <RestKit/RestKit.h>
#import <UIKit/UIKit.h>
#import "BPTableViewController.h"
#import "BPJudge.h"
#import "BPEventViewController.h"
#import "BPEventsNavigationController.h"
#import "BPEventsTableViewCell.h"

@interface BPEventsTableViewController : BPTableViewController
@property (nonatomic) NSMutableArray *events;
@property (nonatomic) BPEventsNavigationController *eventsNavigationController;

@property (nonatomic, assign) BPJudge *judge;
@end
