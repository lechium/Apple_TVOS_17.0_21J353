//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDOpenClient
{
}

- (void)updateRestrictionKnowledgeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9643
- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c92b8
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c8efd
- (void)getiCloudHostNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8dfc
- (void)getURLOverrideForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8c32
- (void)canOpenURL:(id)arg1 publicSchemes:(_Bool)arg2 privateSchemes:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c89ed
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c85e4
- (void)openURL:(id)arg1 fileHandle:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c812b
- (void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 useClientProcessHandle:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c7efe
- (void)performOpenOperationWithURL:(id)arg1 fileHandle:(id)arg2 bundleIdentifier:(id)arg3 documentIdentifier:(id)arg4 isContentManaged:(_Bool)arg5 sourceAuditToken:(const CDStruct_4c969caf *)arg6 userInfo:(id)arg7 options:(id)arg8 delegate:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;	// IMP=0x00000000000c7bc3
- (void)invokeServiceInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c7a9f
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c7a0b
- (_Bool)serviceSelectorRequiresDatabaseContext:(SEL)arg1;	// IMP=0x00000000000c79fb

@end

