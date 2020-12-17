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
@property (weak, nonatomic) IBOutlet *birdNameLabel;
@property (weak, nonatomic) IBOutlet *locationLabel;
@property (weak, nonatomic) IBOutlet *dataLabel;

@end

NS_ASSUME_NONNULL_END
