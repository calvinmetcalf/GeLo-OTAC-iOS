//
//  GeLoAdvIntervalViewController.h
//  GeLoBeaconOTAConfiguration
//
//  Created by Zach Dennis on 4/15/14.
//  Copyright (c) 2014 GeLo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeLoPropertyViewController.h"

/*
 * GeLoAdvIntervalViewController is the view controller that
 * represents showing/editing the advertising interval property.
 */
@interface GeLoAdvIntervalViewController : GeLoPropertyViewController

@property (weak, nonatomic) IBOutlet UITextField *advIntervalTextField;

@end
