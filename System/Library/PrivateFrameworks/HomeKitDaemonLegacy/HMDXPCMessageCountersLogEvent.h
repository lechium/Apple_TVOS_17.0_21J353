//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageCountersLogEvent : HMMLogEvent
{
    NSString *_type;	// 8 = 0x8
    NSString *_peerInformation;	// 16 = 0x10
    NSString *_messageName;	// 24 = 0x18
    NSNumber *_count;	// 32 = 0x20
}

+ (id)XPCMessageCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;	// IMP=0x00600000002ec34e
- (void).cxx_destruct;	// IMP=0x00000000002ec2fb
@property(readonly, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSString *peerInformation; // @synthesize peerInformation=_peerInformation;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (_Bool)shouldSubmit;	// IMP=0x00000000002ec268
- (id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;	// IMP=0x00000000002ec138

@end

