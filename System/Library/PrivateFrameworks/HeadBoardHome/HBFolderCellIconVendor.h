//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBFolder;

__attribute__((visibility("hidden")))
@interface HBFolderCellIconVendor : NSObject
{
    HBFolder *_pendingFulfillmentFolder;	// 8 = 0x8
}

+ (id)vendorQueue;	// IMP=0x0060000000069555
- (void).cxx_destruct;	// IMP=0x0000000000069bdc
@property(retain, nonatomic) HBFolder *pendingFulfillmentFolder; // @synthesize pendingFulfillmentFolder=_pendingFulfillmentFolder;
- (void)requestIconLayerStackForFolder:(id)arg1 reasons:(unsigned long long)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x00000000000695ff

@end

