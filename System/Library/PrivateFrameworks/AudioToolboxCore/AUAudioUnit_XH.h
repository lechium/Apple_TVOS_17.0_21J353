//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AUAudioUnit_XPC, NSExtension, NSObject, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XH
{
    NSExtension *_extension;	// 344 = 0x158
    NSUUID *_requestIdentifier;	// 352 = 0x160
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;	// 360 = 0x168
    AUAudioUnit_XPC *_strongInstance;	// 368 = 0x170
    CDUnknownBlockType _speechSynthesisOutputMetadataBlock;	// 376 = 0x178
    CDUnknownBlockType _completionBlock;	// 384 = 0x180
}

+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 options:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x006000000012d59a
- (void).cxx_destruct;	// IMP=0x000000000012cd6f
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AUAudioUnit_XPC *strongInstance; // @synthesize strongInstance=_strongInstance;
- (CDUnknownBlockType)speechSynthesisOutputMetadataBlock;	// IMP=0x000000000012cd0b
- (void)setSpeechSynthesisOutputMetadataBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012cc92
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012cc14
- (void)dealloc;	// IMP=0x000000000012ca99
- (void)_doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012c853
- (void)_internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription)arg2 instance:(struct OpaqueAudioComponentInstance *)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000012c3a2

@end

