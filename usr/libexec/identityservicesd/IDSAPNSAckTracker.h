//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IDSAPNSAckTrackerDelegate;

@interface IDSAPNSAckTracker : NSObject
{
    id <IDSAPNSAckTrackerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001cd74b
@property(retain, nonatomic) id <IDSAPNSAckTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addBlockToAggregatableMessage:(id)arg1 forURIs:(id)arg2 trackingSet:(id)arg3 guid:(id)arg4;	// IMP=0x00100000001cd3ad
- (void)addBlockToAggregateMessage:(id)arg1 guid:(id)arg2;	// IMP=0x00100000001cd1fe
- (void)addBlockToMMLMessage:(id)arg1 guid:(id)arg2;	// IMP=0x00100000001ccf2c
- (void)trackMessages:(id)arg1 forURIs:(id)arg2;	// IMP=0x00100000001ccbcf
- (void)trackMMLMessages:(id)arg1 forURIs:(id)arg2;	// IMP=0x00100000001cc6d3

@end
