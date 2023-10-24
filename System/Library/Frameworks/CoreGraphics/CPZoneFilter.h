//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPPage;

__attribute__((visibility("hidden")))
@interface CPZoneFilter : NSObject
{
    CPPage *page;	// 8 = 0x8
    double minArea;	// 16 = 0x10
}

+ (void)filterZonesInPage:(id)arg1;	// IMP=0x006000000053d747
- (void)findUsedGraphicsInZone:(id)arg1;	// IMP=0x000000000053d2b6
- (void)findBackgroundGraphicsInZone:(id)arg1;	// IMP=0x000000000053d15e
- (void)filterZonesInZone:(id)arg1;	// IMP=0x000000000053cec1
- (id)initWithPage:(id)arg1;	// IMP=0x000000000053ce3c

@end

