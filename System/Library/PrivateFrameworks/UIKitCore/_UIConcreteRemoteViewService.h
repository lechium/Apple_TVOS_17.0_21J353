//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIRemoteViewService.h"

@class NSExtension, NSUUID;
@protocol PKPlugIn;

__attribute__((visibility("hidden")))
@interface _UIConcreteRemoteViewService : _UIRemoteViewService
{
    _Bool _overridesHostAppearance;	// 8 = 0x8
    NSUUID *_contextToken;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012937bb
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (_Bool)overridesHostAppearance;	// IMP=0x0000000001293786
- (id)contextToken;	// IMP=0x0000000001293775
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000129370c
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x00000000012936a3
- (id)viewControllerClassName;	// IMP=0x000000000129353f
- (int)processIdentifier;	// IMP=0x00000000012934cb
- (id)multipleInstanceUUID;	// IMP=0x000000000129347b
- (_Bool)multipleInstances;	// IMP=0x00000000012933bd
- (id)xpcServiceNameRoot;	// IMP=0x00000000012932f2
- (id)identifier;	// IMP=0x00000000012932a2
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (void)updateOverridesHostAppearance;	// IMP=0x0000000001293189
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;	// IMP=0x00000000012930c3

@end
