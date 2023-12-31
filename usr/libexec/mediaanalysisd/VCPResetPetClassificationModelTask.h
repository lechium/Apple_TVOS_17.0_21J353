//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface VCPResetPetClassificationModelTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSURL *_photoLibraryURL;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
    CDUnknownBlockType _reply;	// 32 = 0x20
    CDUnknownBlockType _cancelBlock;	// 40 = 0x28
}

+ (id)taskWithPhotoLibraryURL:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00200000000d56ff
- (void).cxx_destruct;	// IMP=0x00200000000d5c1d
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x00100000000d5bfc
- (int)run;	// IMP=0x00100000000d59b7
- (_Bool)isCanceled;	// IMP=0x00100000000d5998
- (void)cancel;	// IMP=0x00100000000d598d
- (float)resourceRequirement;	// IMP=0x00100000000d597f
- (void)dealloc;	// IMP=0x00100000000d57b7
- (id)initWithPhotoLibraryURL:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d563c

@end

