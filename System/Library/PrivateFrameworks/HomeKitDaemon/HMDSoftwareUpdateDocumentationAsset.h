//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSArray, NSDate, NSInputStream, NSNotificationCenter, NSObject, NSString, NSURL, NSUUID;
@protocol HMSoftwareUpdateDocumentationAssetExtractor, HMSoftwareUpdateUrlSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateDocumentationAsset : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _shouldAutomaticallyCache;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HMSoftwareUpdateDocumentationMetadata *_metadata;	// 48 = 0x30
    id <HMSoftwareUpdateUrlSession> _URLSession;	// 56 = 0x38
    CDUnknownBlockType _URLSessionFactory;	// 64 = 0x40
    id <HMSoftwareUpdateDocumentationAssetExtractor> _extractor;	// 72 = 0x48
    CDUnknownBlockType _extractorFactory;	// 80 = 0x50
    NSInputStream *_archivedFileStream;	// 88 = 0x58
    unsigned long long _downloadRetryCount;	// 96 = 0x60
    NSDate *_nextPermittedDownloadDate;	// 104 = 0x68
    CDUnknownBlockType _dateWithTimeIntervalSinceNowFactory;	// 112 = 0x70
    NSNotificationCenter *_notificationCenter;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000864562
+ (id)logCategory;	// IMP=0x0010000000864532
+ (id)assetWithURL:(id)arg1;	// IMP=0x001000000086401f
+ (id)assetDirectoryURL;	// IMP=0x0010000000863fef
- (void).cxx_destruct;	// IMP=0x0000000000861bd1
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) CDUnknownBlockType dateWithTimeIntervalSinceNowFactory; // @synthesize dateWithTimeIntervalSinceNowFactory=_dateWithTimeIntervalSinceNowFactory;
@property(copy) NSDate *nextPermittedDownloadDate; // @synthesize nextPermittedDownloadDate=_nextPermittedDownloadDate;
@property unsigned long long downloadRetryCount; // @synthesize downloadRetryCount=_downloadRetryCount;
@property(retain, nonatomic) NSInputStream *archivedFileStream; // @synthesize archivedFileStream=_archivedFileStream;
@property(readonly) CDUnknownBlockType extractorFactory; // @synthesize extractorFactory=_extractorFactory;
@property(retain, nonatomic) id <HMSoftwareUpdateDocumentationAssetExtractor> extractor; // @synthesize extractor=_extractor;
@property(readonly) CDUnknownBlockType URLSessionFactory; // @synthesize URLSessionFactory=_URLSessionFactory;
@property(retain, nonatomic) id <HMSoftwareUpdateUrlSession> URLSession; // @synthesize URLSession=_URLSession;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)setExtractionProgress:(double)arg1;	// IMP=0x00000000008619af
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000000861394
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000000861298
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000086117b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000861083
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000860f77
- (id)logIdentifier;	// IMP=0x0000000000860f27
- (void)finishUnarchive;	// IMP=0x0000000000860ed5
- (void)cancelUnarchive;	// IMP=0x0000000000860e83
- (void)startUnarchive;	// IMP=0x0000000000860e31
- (void)finishDownload;	// IMP=0x0000000000860ddf
- (void)cancelDownload;	// IMP=0x0000000000860d8d
- (void)startDownload;	// IMP=0x0000000000860d3b
- (_Bool)purgeWithError:(id *)arg1;	// IMP=0x0000000000860bf5
- (void)startCaching;	// IMP=0x0000000000860b87
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x000000000086080b
- (void)resetDownloadRetryCount;	// IMP=0x00000000008606c2
- (void)increaseDownloadRetryCount;	// IMP=0x0000000000860466
- (_Bool)isDownloadPermitted;	// IMP=0x0000000000860393
@property(readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property(readonly, copy) NSURL *bundleURL;
- (id)archiveURL;	// IMP=0x000000000086004d
- (id)metadataURL;	// IMP=0x000000000085fff6
@property(readonly, copy) NSURL *URL;
- (void)setState:(long long)arg1;	// IMP=0x000000000085fdaf
@property(readonly) long long state; // @synthesize state=_state;
@property _Bool shouldAutomaticallyCache; // @synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000085fbcb
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithDocumentationMetadata:(id)arg1;	// IMP=0x000000000085f945
- (id)initWithDocumentationMetadata:(id)arg1 dateWithTimeIntervalSinceNowFactory:(CDUnknownBlockType)arg2 URLSessionFactory:(CDUnknownBlockType)arg3 extractorFactory:(CDUnknownBlockType)arg4 notificationCenter:(id)arg5;	// IMP=0x000000000085f6fb
- (id)init;	// IMP=0x000000000085f653

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

