//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADTaskProvider : NSObject
{
}

+ (unsigned long long)taskID;	// IMP=0x00400000000dd1b9
- (void)retireTask:(id)arg1;	// IMP=0x00400000000dd206
- (id)nextClusterProcessingTask;	// IMP=0x00100000000dd1fe
- (id)nextDownloadAssetProcessingTask;	// IMP=0x00100000000dd1f6
- (id)nextAssetProcessingTask;	// IMP=0x00100000000dd1ee
- (unsigned long long)iterations;	// IMP=0x00100000000dd1e3
- (unsigned long long)priority;	// IMP=0x00100000000dd1db
- (unsigned long long)taskID;	// IMP=0x00100000000dd1c1

@end

