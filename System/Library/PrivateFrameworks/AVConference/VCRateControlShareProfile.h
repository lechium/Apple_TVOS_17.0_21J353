//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlShareProfile : NSObject
{
    unsigned int _reservedBitrate;	// 8 = 0x8
    unsigned int _rateSharingCount;	// 12 = 0xc
}

@property(nonatomic) unsigned int rateSharingCount; // @synthesize rateSharingCount=_rateSharingCount;
@property(nonatomic) unsigned int reservedBitrate; // @synthesize reservedBitrate=_reservedBitrate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d6b3

@end

