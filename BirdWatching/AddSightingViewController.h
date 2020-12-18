//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by lengzehua on 2020/12/18.
//

#import <UIKit/UIKit.h>
@class BirdSighting;

NS_ASSUME_NONNULL_BEGIN

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end

NS_ASSUME_NONNULL_END
