//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NviContext;
@protocol NviDataReceiver;

@protocol NviDataSource <NSObject>
@property(readonly, nonatomic) unsigned long long type;
- (void)stopWithDidStopHandler:(void (^)(_Bool, NSError *))arg1;
- (void)startWithNviContext:(NviContext *)arg1 didStartHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeReceiver:(id <NviDataReceiver>)arg1;
- (void)addReceiver:(id <NviDataReceiver>)arg1;
@end

