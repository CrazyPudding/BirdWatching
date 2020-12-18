//
//  AddSightingViewController.m
//  BirdWatching
//
//  Created by lengzehua on 2020/12/18.
//

#import "AddSightingViewController.h"
#import "BirdSighting.h"

@interface AddSightingViewController ()

@end

@implementation AddSightingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    if ((textField == self.birdNameInput) || textField == (self.locationInput)) {
        [textField resignFirstResponder];
    }
    return YES;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([[segue identifier] isEqualToString:@"ReturnInput"]) {
        if ([self.birdNameInput.text length] || [self.locationInput.text length]) {
            BirdSighting *birdSighting;
            NSDate *today = [NSDate date];
            birdSighting = [[BirdSighting alloc] initWithName:self.birdNameInput.text location:self.locationInput.text date:today];
            self.birdSighting = birdSighting;
        }
    }
}

@end
