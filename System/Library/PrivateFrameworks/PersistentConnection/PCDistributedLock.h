//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PCDistributedLock : NSObject
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012119
- (void)unlock;	// IMP=0x00000000000120ae
- (void)lock;	// IMP=0x0000000000012097
- (_Bool)tryLock;	// IMP=0x0000000000012083
- (_Bool)_lockBlocking:(_Bool)arg1;	// IMP=0x0000000000011f23
- (void)dealloc;	// IMP=0x0000000000011ea8
- (id)initWithName:(id)arg1;	// IMP=0x0000000000011dc0
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000011d45

@end

