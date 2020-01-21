//
//  LSIPerson.h
//  StarWarsSearch-Objc
//
//  Created by Paul Solt on 1/21/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIPerson : NSObject

@property NSString *name;
@property NSString *birthYear;
@property NSString *height;
@property NSString *eyeColor;

// Parsing from JSON
// 1. Create initializer that can setup object from NSDictionary (NS = NextStep)

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
