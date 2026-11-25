add_executable(properdesktop-toolkit-demo
    demo/main.cpp
)

target_link_libraries(properdesktop-toolkit-demo PRIVATE properdesktop-toolkit)

add_executable(properdesktop-toolkit-gallery
    gallery/main.cpp
)

target_link_libraries(properdesktop-toolkit-gallery PRIVATE properdesktop-toolkit)
