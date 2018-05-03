#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HSYBaseCollectionReusableView.h"
#import "HSYBaseCollectionViewCell.h"
#import "HSYBaseTabBarItemCollectionViewCell.h"
#import "HSYBaseTableViewCell.h"
#import "HSYBaseCollectionModel.h"
#import "HSYBaseModel.h"
#import "HSYBaseRefleshModel.h"
#import "HSYBaseSegmentedPageControlModel.h"
#import "HSYBaseTabBarModel.h"
#import "HSYBaseTableModel.h"
#import "HSYBaseWebModel.h"
#import "HSYCocoaKitRACSubscribeNotification.h"
#import "HSYBaseCollectionViewController.h"
#import "HSYBaseLaunchScreenViewController.h"
#import "HSYBaseRefleshViewController.h"
#import "HSYBaseSegmentedPageViewController.h"
#import "HSYBaseTabBarViewController.h"
#import "HSYBaseTableViewController.h"
#import "HSYBaseViewController.h"
#import "HSYBaseWebViewController.h"
#import "NSBundle+PrivateFileResource.h"
#import "NSDate+Timestamp.h"
#import "NSFileManager+Finder.h"
#import "NSMutableArray+BasicAlgorithm.h"
#import "NSObject+JSONModelForRuntime.h"
#import "NSObject+Property.h"
#import "NSObject+Runtime.h"
#import "NSObject+UIKit.h"
#import "NSString+Replace.h"
#import "NSString+Size.h"
#import "UIApplication+Device.h"
#import "UIColor+Hex.h"
#import "UIImage+Canvas.h"
#import "UIImageView+UrlString.h"
#import "UILabel+AttributedString.h"
#import "UILabel+SuggestSize.h"
#import "UINavigationBar+Background.h"
#import "UIScrollView+Page.h"
#import "UIView+DrawPictures.h"
#import "UIView+Frame.h"
#import "UIViewController+Alert.h"
#import "UIViewController+Device.h"
#import "UIViewController+Keyboard.h"
#import "UIViewController+NavigationItem.h"
#import "UIViewController+Runtime.h"
#import "HSYBaseCustomButton.h"
#import "HSYBaseSegmentedPageControl.h"
#import "HSYBaseCustomNavigationController.h"
#import "HSYBaseViewController+CustomNavigationItem.h"
#import "HSYCustomBaseTransitionAnimation.h"
#import "HSYCustomLeftTransitionAnimation.h"
#import "HSYCustomNavigationBar.h"
#import "UIViewController+Shadow.h"
#import "FMResultSet+Model.h"
#import "HSYFMDBMacro.h"
#import "HSYFMDBOperation.h"
#import "HSYFMDBOperationFieldInfo.h"
#import "HSYFMDBOperationManager+Operation.h"
#import "HSYFMDBOperationManager.h"
#import "HSYHUDHelper.h"
#import "HSYHUDModel.h"
#import "HSYBaseSegmentedPageConfig.h"
#import "NSObject+JSONModel.h"
#import "NSObject+JSONObjc.h"
#import "NSObject+JSONWriting.h"
#import "NSString+JSONParsing.h"
#import "HSYCocoaKitLottieAnimationManager.h"
#import "APPPathMacroFile.h"
#import "FMDBMacroFile.h"
#import "HSYCocoaKit.h"
#import "NetworkingRequestPathFile.h"
#import "PublicMacroFile.h"
#import "AFHTTPSessionManager+RACSignal.h"
#import "AFURLSessionManager+RACSignal.h"
#import "HSYNetWorkingManager.h"
#import "NSError+Message.h"
#import "HSYCustomRefreshView.h"
#import "SVPullToRefresh.h"
#import "UIScrollView+SVInfiniteScrolling.h"
#import "UIScrollView+SVPullToRefresh.h"
#import "HSYCocoaKitManager.h"
#import "NSArray+RACSignal.h"
#import "NSDictionary+RACSignal.h"
#import "NSMapTable+RACSignal.h"
#import "RACSignal+Timer.h"
#import "UIActionSheet+RACSignal.h"
#import "UIAlertController+RACSignal.h"
#import "UIAlertView+RACSignal.h"
#import "GCDAsyncSocket+RACSignal.h"
#import "HSYCocoaKitSocketManager.h"
#import "HSYCocoaKitSocketRACSignal.h"

FOUNDATION_EXPORT double HSYCocoaKitVersionNumber;
FOUNDATION_EXPORT const unsigned char HSYCocoaKitVersionString[];

