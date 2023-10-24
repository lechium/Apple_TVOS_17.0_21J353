//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, STLocationStatusDomainLocationAttribution;

@interface CLAttributionRecord : NSObject
{
    int _serviceTypeAttributionCounts[19];	// 8 = 0x8
    int _totalAttributionCount;	// 84 = 0x54
    STLocationStatusDomainLocationAttribution *_attributionIdentifier;	// 88 = 0x58
    CLTimer *_attributionTimer;	// 96 = 0x60
}

@property(retain, nonatomic) CLTimer *attributionTimer; // @synthesize attributionTimer=_attributionTimer;
@property(retain, nonatomic) STLocationStatusDomainLocationAttribution *attributionIdentifier; // @synthesize attributionIdentifier=_attributionIdentifier;
@property(readonly, nonatomic) int totalAttributionCount; // @synthesize totalAttributionCount=_totalAttributionCount;
- (id)description;	// IMP=0x00100000008fb8b5
- (void)decrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x00100000008fb735
- (void)incrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x00100000008fb728
- (void)dealloc;	// IMP=0x00100000008fb6b7
- (id)initWithAttributionId:(id)arg1 andTimer:(id)arg2;	// IMP=0x00100000008fb642

@end

