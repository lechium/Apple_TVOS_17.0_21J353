//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoHardwareDumpWriter : NSObject
{
    void *_dumpFile;	// 8 = 0x8
    struct __CFSet *_sources;	// 16 = 0x10
    struct os_unfair_lock_s _registrationLock;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000000360c4
- (void)dealloc;	// IMP=0x00000000000362e1
- (id)init;	// IMP=0x0000000000036113

@end

