//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject
{
    unsigned int _type;	// 8 = 0x8
    struct __CFDictionary *_callbacksDict;	// 16 = 0x10
    NSMutableArray *_controlInfoPool;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;	// 32 = 0x20
    unsigned char _version;	// 96 = 0x60
    unsigned char _fecFeedbackVersion;	// 97 = 0x61
    unsigned int _optionBitmap;	// 100 = 0x64
    struct _opaque_pthread_rwlock_t _callbackDictLock;	// 104 = 0x68
}

@property unsigned char fecFeedbackVersion; // @synthesize fecFeedbackVersion=_fecFeedbackVersion;
@property(readonly) unsigned char version; // @synthesize version=_version;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (unsigned long long)feedbackSize;	// IMP=0x0000000000152e8b
- (int)addMediaControlInfoOption:(unsigned int)arg1;	// IMP=0x0000000000152e80
- (int)deregisterCallbacksWithContext:(void *)arg1;	// IMP=0x0000000000152a60
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x00000000001529fc
- (void)dealloc;	// IMP=0x0000000000152983
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;	// IMP=0x000000000015289c

@end

