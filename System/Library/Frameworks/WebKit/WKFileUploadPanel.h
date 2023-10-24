//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController
{
    struct WeakObjCPtr<WKContentView> _view;	// 8 = 0x8
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> _listener;	// 16 = 0x10
    struct RetainPtr<NSSet<NSString *>> _acceptedUTIs;	// 24 = 0x18
    struct OptionSet<WKFileUploadPanelImagePickerType> _allowedImagePickerTypes;	// 32 = 0x20
    struct CGPoint _interactionPoint;	// 40 = 0x28
    _Bool _allowMultipleFiles;	// 56 = 0x38
    _Bool _usingCamera;	// 57 = 0x39
    struct RetainPtr<UIImagePickerController> _cameraPicker;	// 64 = 0x40
    struct RetainPtr<UIViewController> _presentationViewController;	// 72 = 0x48
    _Bool _isPresentingSubMenu;	// 80 = 0x50
    struct RetainPtr<UIDocumentPickerViewController> _documentPickerController;	// 88 = 0x58
    unsigned char _mediaCaptureType;	// 96 = 0x60
    struct Vector<WTF::RetainPtr<NSURL>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _temporaryUploadedFileURLs;	// 104 = 0x68
    struct RetainPtr<NSFileManager> _uploadFileManager;	// 120 = 0x78
    struct RetainPtr<NSFileCoordinator> _uploadFileCoordinator;	// 128 = 0x80
    id <WKFileUploadPanelDelegate> _delegate;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x0000000000419805
- (void).cxx_destruct;	// IMP=0x00000000004196fa
@property(nonatomic) __weak id <WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)platformSupportsPickerViewController;	// IMP=0x00000000004196cd
- (pair_1e65d456)_copyToNewTemporaryDirectory:(id)arg1;	// IMP=0x00000000004190dc
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000418ee8
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000418e1d
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000418d16
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000418b26
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000418ac9
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000000418a96
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;	// IMP=0x0000000000418878
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00000000004185f6
- (_Bool)_willMultipleSelectionDelegateBeCalled;	// IMP=0x00000000004185d1
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x000000000041859e
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00000000004184e7
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000004184d5
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000418430
- (void)_showPhotoPicker;	// IMP=0x000000000041842a
- (void)_showCamera;	// IMP=0x00000000004182f0
- (_Bool)_shouldMediaCaptureOpenMediaDevice;	// IMP=0x00000000004182c1
- (void)_adjustMediaCaptureType;	// IMP=0x0000000000418228
- (void)showDocumentPickerMenu;	// IMP=0x00000000004181ec
- (void)showFilePickerMenu;	// IMP=0x0000000000418003
- (id)_cameraButtonLabel;	// IMP=0x0000000000417f1b
- (id)_photoLibraryButtonLabel;	// IMP=0x0000000000417e92
- (id)_chooseFilesButtonLabel;	// IMP=0x0000000000417de6
- (id)_mediaTypesForPickerSourceType:(long long)arg1;	// IMP=0x0000000000417ab3
- (id)acceptedTypeIdentifiers;	// IMP=0x0000000000417a76
- (id)currentAvailableActionTitles;	// IMP=0x00000000004179c0
- (void)_dismissDisplayAnimated:(_Bool)arg1;	// IMP=0x000000000041790c
- (void)dismiss;	// IMP=0x0000000000417874
- (void)presentWithParameters:(void *)arg1 resultListener:(void *)arg2;	// IMP=0x0000000000416f76
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;	// IMP=0x0000000000416c2f
- (void)_chooseMediaItems:(id)arg1;	// IMP=0x00000000004168e6
- (void)_cancel;	// IMP=0x00000000004168a9
- (void)_dispatchDidDismiss;	// IMP=0x0000000000416848
- (void)dealloc;	// IMP=0x00000000004167db
- (id)initWithView:(id)arg1;	// IMP=0x0000000000416786

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
