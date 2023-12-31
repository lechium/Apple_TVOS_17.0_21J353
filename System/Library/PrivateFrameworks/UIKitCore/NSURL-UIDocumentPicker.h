//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (UIDocumentPicker)
+ (id)ui_incomingDirectory:(_Bool)arg1;	// IMP=0x002000000064698d
+ (id)ui_URLFromExportBookmark:(id)arg1;	// IMP=0x00200000006468a9
+ (id)ui_cloudDocsContainerURL;	// IMP=0x00200000006467ba
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00200000007e2e8c
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;	// IMP=0x00200000007e28e9
+ (id)mapsURLWithQuery:(id)arg1;	// IMP=0x00200000007e27f2
+ (void)_setAllowsCreationOfFileURLFromItemProvider:(_Bool)arg1;	// IMP=0x0020000000d40135
+ (_Bool)_allowsCreationOfFileURLFromItemProvider;	// IMP=0x0020000000d4010a
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;	// IMP=0x00100000006470d6
- (id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2;	// IMP=0x001000000064707a
- (id)ui_downloadOperationForActivity:(id)arg1;	// IMP=0x0010000000647042
- (id)ui_resolveOnDiskBookmarkAndPromise;	// IMP=0x0010000000647001
- (void)ui_scheduleForCleanup;	// IMP=0x0010000000646c3d
- (id)ui_bookmarkForExportWithError:(id *)arg1;	// IMP=0x00100000006467c2
- (_Bool)ui_isContentManaged;	// IMP=0x0010000000646770
- (void)ui_setIsContentManaged:(_Bool)arg1;	// IMP=0x0010000000646716
- (_Bool)ui_isUnfulfilledPromiseURL;	// IMP=0x0010000000646605
- (_Bool)ui_canOpenInPlace;	// IMP=0x00100000006465f3
- (void)ui_setIsFileProviderURL:(_Bool)arg1;	// IMP=0x00100000006464c2
- (_Bool)ui_isFileProviderURL;	// IMP=0x0010000000646396
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;	// IMP=0x0010000000646329
- (_Bool)ui_hasReadSandboxExtended;	// IMP=0x001000000064630d
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x0010000000646117
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;	// IMP=0x00100000006460f8
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;	// IMP=0x00100000006460d9
- (_Bool)isHTTPOrHTTPSURL;	// IMP=0x00100000007e3328
- (_Bool)isJavaScriptURL;	// IMP=0x00100000007e32d0
- (_Bool)isAccountURL;	// IMP=0x00100000007e3273
- (_Bool)isWebcalURL;	// IMP=0x00100000007e3163
- (_Bool)isSpringboardHandledURL;	// IMP=0x00100000007e30fe
- (id)searchResultIdentifier;	// IMP=0x00100000007e3009
- (id)searchResultDomain;	// IMP=0x00100000007e2f08
- (id)radarWebURL;	// IMP=0x00100000007e2cf2
- (id)phobosURL;	// IMP=0x00100000007e2c8e
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;	// IMP=0x00100000007e2ad7
- (_Bool)isInternalUIKitURL;	// IMP=0x00100000007e36ba
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;	// IMP=0x0010000000d4026c
- (id)_NSItemProviderArchive_customArchiveDictionary;	// IMP=0x0010000000d401c5
@property(copy, nonatomic, setter=_setTitle:) NSString *_title;
@end

