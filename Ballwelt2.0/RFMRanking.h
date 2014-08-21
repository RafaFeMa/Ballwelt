//
//  RFMRanking.h
//  Ballwelt2.0
//
//  Created by Rafa Ferrero on 20/08/14.
//  Copyright (c) 2014 Rafa Ferrero. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RFMRanking : NSObject<NSXMLParserDelegate>

@property (nonatomic, readonly) NSUInteger playersCount;

- (id)playerAtIndex:(NSUInteger)index;

//-(NSInteger) countPlayers;
@end