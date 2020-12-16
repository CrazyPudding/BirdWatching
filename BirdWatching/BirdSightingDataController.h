//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Zehua on 2020/12/16.
//

#import <Foundation/Foundation.h>
#import "BirdSighting.h"

NS_ASSUME_NONNULL_BEGIN

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end

NS_ASSUME_NONNULL_END
