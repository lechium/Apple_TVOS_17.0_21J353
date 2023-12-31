//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeSequence/NSObject-Protocol.h>

@class NSArray, NSError;
@protocol BPSSubscriber;

@protocol BPSPublisher <NSObject>
- (void)subscribe:(id <BPSSubscriber>)arg1;

@optional
- (void)reset;
- (_Bool)completed;
- (id)nextEvent;
- (NSError *)startWithSubscriber:(id <BPSSubscriber>)arg1;
- (NSArray *)upstreamPublishers;
@end

