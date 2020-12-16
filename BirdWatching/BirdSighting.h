//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Zehua on 2020/12/16.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

NS_ASSUME_NONNULL_BEGIN

@interface BirdSighting : NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *location;
@property(nonatomic, copy) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *) date;

@end

NS_ASSUME_NONNULL_END
