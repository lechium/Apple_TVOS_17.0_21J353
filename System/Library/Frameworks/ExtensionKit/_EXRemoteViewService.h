//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewService.h>

@class NSUUID, _EXExtensionProcessHandle;

__attribute__((visibility("hidden")))
@interface _EXRemoteViewService : _UIRemoteViewService
{
    NSUUID *_contextToken;	// 8 = 0x8
    _EXExtensionProcessHandle *_extensionProcess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a2ac
@property(readonly) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
- (id)contextToken;	// IMP=0x000000000000a285
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a275
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a265
- (id)viewControllerClassName;	// IMP=0x000000000000a24c
- (int)processIdentifier;	// IMP=0x000000000000a208
- (id)multipleInstancesUUID;	// IMP=0x000000000000a200
- (_Bool)multipleInstances;	// IMP=0x000000000000a1f8
- (id)xpcServiceNameRoot;	// IMP=0x000000000000a157
- (id)identifier;	// IMP=0x000000000000a0b6
- (_Bool)overridesHostAppearance;	// IMP=0x000000000000a0ae
- (id)initWithExtensionProcess:(id)arg1 contextToken:(id)arg2;	// IMP=0x000000000000a00c

@end

