//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ADSystemService
{
    struct __CFDictionary *_commandMap;	// 8 = 0x8
    struct __CFDictionary *_commandMapV2;	// 16 = 0x10
}

- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000009fdc3
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000009f237
- (id)controlCenterLockRestrictedCommands;	// IMP=0x001000000009f22f
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000009f149
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000009f029
- (id)domains;	// IMP=0x001000000009efd9
- (id)handle;	// IMP=0x001000000009efd0
- (_Bool)isSystemService;	// IMP=0x001000000009efc8
- (id)_systemDomains;	// IMP=0x001000000009ef98
- (void)dealloc;	// IMP=0x001000000009ef3d
- (id)init;	// IMP=0x001000000009eeea

@end

