//
//  BirdSightingDataController.m
//  BirdWatching
//
//  Created by Zehua on 2020/12/16.
//

#import "BirdSightingDataController.h"

@interface BirdSightingDataController ()
- (void)initializeDefaultDataList;
@end

@implementation BirdSightingDataController

// 实例化 Controller 时自动创建默认数据
- (id)init {
    if (self = [super init]) {
        [self initializeDefaultDataList];
        return self;
    }
    return nil;
}

// 创建默认数据
- (void)initializeDefaultDataList {
    NSMutableArray *sightingList = [[NSMutableArray alloc] init];
    self.masterBirdSightList = sightingList;
    BirdSighting *sighting;
    NSDate *today = [NSDate date];
    sighting = [[BirdSighting alloc] initWithName:@"Pigeon" location:@"EveryWhere" date:today];
    [self addBirdSightingWithSighting:sighting];
}

// 重写 msaterBirdSightList 的 setter 方法，并保证设置后仍为 NSMutableArray
- (void)setMasterBirdSightList:(NSMutableArray *)newList {
    if (_masterBirdSightList != newList) {
        _masterBirdSightList = [newList mutableCopy];
    }
}

- (NSUInteger)countOfList {
    return [self.masterBirdSightList count];
}

- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex {
    return [self.masterBirdSightList objectAtIndex:theIndex];
}

- (void)addBirdSightingWithSighting:(BirdSighting *)sighting {
    [self.masterBirdSightList addObject:sighting];
}
@end
