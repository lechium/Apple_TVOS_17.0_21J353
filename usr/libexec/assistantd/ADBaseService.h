//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface ADBaseService
{
    NSDictionary *_commandRegistry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000025390b
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x0010000000253905
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000253894
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002537b7
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000025375c
- (id)domains;	// IMP=0x001000000025373f
- (id)handle;	// IMP=0x0010000000253736
- (SEL)_selectorForCommandClass:(id)arg1 andDomain:(id)arg2;	// IMP=0x0010000000253687
- (void)_registerCommandClass:(id)arg1 forDomain:(id)arg2 withSelector:(SEL)arg3 forRegistry:(id)arg4;	// IMP=0x0010000000253558
- (id)init;	// IMP=0x0010000000253489

@end

