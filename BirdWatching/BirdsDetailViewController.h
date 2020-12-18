//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by lengzehua on 2020/12/17.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

NS_ASSUME_NONNULL_BEGIN

@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dataLabel;

@end

NS_ASSUME_NONNULL_END
