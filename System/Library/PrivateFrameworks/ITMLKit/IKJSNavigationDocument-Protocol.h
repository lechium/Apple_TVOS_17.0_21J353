//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, NSArray, NSDictionary, NSString;

@protocol IKJSNavigationDocument <JSExport>
@property(readonly) NSString *OPTION_RETAIN_CONTEXT;
@property(readonly, retain, nonatomic) NSArray *documents;
- (void)setDocuments:(NSArray *)arg1:(NSDictionary *)arg2;
- (void)clear;
- (void)removeDocument:(IKDOMDocument *)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(IKDOMDocument *)arg1;
- (void)popDocument;
- (void)replaceDocument:(IKDOMDocument *)arg1:(IKDOMDocument *)arg2:(NSDictionary *)arg3;
- (void)insertBeforeDocument:(IKDOMDocument *)arg1:(IKDOMDocument *)arg2:(NSDictionary *)arg3;
- (void)dismissModal;
- (void)presentModal:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)pushDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
@end

