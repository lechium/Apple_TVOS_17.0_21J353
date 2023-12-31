//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupsMediator, MGOutstandingQuery, NSString;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryClientHandlerQuery : NSObject
{
    _Bool _seenInitialResponse;	// 8 = 0x8
    MGOutstandingQuery *_query;	// 16 = 0x10
    MGGroupsMediator *_groupsMediator;	// 24 = 0x18
}

+ (id)handlerWithQuery:(id)arg1 forGroupsQueryAgent:(id)arg2;	// IMP=0x0010000000001298
- (void).cxx_destruct;	// IMP=0x0000000000001d1b
@property(readonly, nonatomic) MGGroupsMediator *groupsMediator; // @synthesize groupsMediator=_groupsMediator;
@property(nonatomic) _Bool seenInitialResponse; // @synthesize seenInitialResponse=_seenInitialResponse;
@property(readonly, nonatomic) MGOutstandingQuery *query; // @synthesize query=_query;
- (id)handleCompleteResponse:(id)arg1 jsonPayload:(id)arg2;	// IMP=0x0000000000001711
- (_Bool)validateResponse:(id)arg1;	// IMP=0x0000000000001619
- (void)prepareURL:(id)arg1;	// IMP=0x00000000000014a9
@property(readonly, copy) NSString *description;
- (id)_initWithQuery:(id)arg1 groupsQueryAgent:(id)arg2;	// IMP=0x0000000000001306

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

