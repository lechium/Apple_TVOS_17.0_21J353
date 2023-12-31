//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDReadClient
{
}

- (void)getSystemContentStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ced55
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ceb8a
- (void)getSettingsStoreConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cea1c
- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce981
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ce309
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cd3f9
- (void)getResourceValuesForKeys:(id)arg1 mimic:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ccdf4
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ccb9d
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ccada
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc859
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc77a
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc671
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc568
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc48c
- (void)getTypeRecordWithIdentifier:(id)arg1 allowUndeclared:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc3bd
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc25e
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc173
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc0bb
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cbefe
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cbdcf
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cb9b9
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb808
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb630
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb549
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb384
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb337
- (void)invokeServiceInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000cb241
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000cb16b

@end

