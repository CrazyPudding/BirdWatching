//
//  ViewController.h
//  BirdWatching
//
//  Created by Zehua on 2020/12/16.
//

#import <UIKit/UIKit.h>
#import "BirdSightingDataController.h"

@interface ViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;
@end

