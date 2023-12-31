//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoAssetClientRequest, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MADAutoSetEliminate : NSObject
{
    _Bool _awaitingSchedulerAck;	// 8 = 0x8
    _Bool _awaitingStagerAck;	// 9 = 0x9
    MADAutoAssetClientRequest *_clientRequest;	// 16 = 0x10
    MAAutoAssetSelector *_assetSelector;	// 24 = 0x18
    NSMutableDictionary *_activeJobsByUUID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008d33b
- (void).cxx_destruct;	// IMP=0x000000000008d59d
@property(retain, nonatomic) NSMutableDictionary *activeJobsByUUID; // @synthesize activeJobsByUUID=_activeJobsByUUID;
@property(nonatomic) _Bool awaitingStagerAck; // @synthesize awaitingStagerAck=_awaitingStagerAck;
@property(nonatomic) _Bool awaitingSchedulerAck; // @synthesize awaitingSchedulerAck=_awaitingSchedulerAck;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
@property(readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest; // @synthesize clientRequest=_clientRequest;
- (id)summary;	// IMP=0x000000000008d355
- (id)description;	// IMP=0x000000000008d343
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008d210
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008d03a
- (id)initWithClientRequest:(id)arg1 withAssetSelector:(id)arg2;	// IMP=0x000000000008cecc
- (id)initWithAssetSelector:(id)arg1;	// IMP=0x000000000008ceb5
- (id)initWithClientRequest:(id)arg1;	// IMP=0x000000000008cea1

@end

