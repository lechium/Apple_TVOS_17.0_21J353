//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFVMData : NSData
{
    int _cd_rc;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
    void *_payload;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000023cc2c
- (Class)classForCoder;	// IMP=0x000000000023cc1b
- (_Bool)_isDeallocating;	// IMP=0x000000000023cbfb
- (_Bool)_tryRetain;	// IMP=0x000000000023cbbe
- (unsigned long long)retainCount;	// IMP=0x000000000023cba6
- (oneway void)release;	// IMP=0x000000000023cb68
- (id)retain;	// IMP=0x000000000023cb47
- (void)dealloc;	// IMP=0x000000000023caf6
- (unsigned long long)length;	// IMP=0x000000000023cae5
- (const void *)bytes;	// IMP=0x000000000023cad4
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000023c6d8
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000023c64d

@end
